/* automaton
 * (c) 2013 Justin Gottula
 * The source code of this project is distributed under the terms of the
 * simplified BSD license. See the LICENSE file for details.
 */


#include "time/alarm.h"


static struct alarm *first = NULL;


/* call from timer ISR so alarms will tick */
void alarm_tick(void) {
	struct alarm *this = first;
	while (this != NULL) {
		if (this->ticking) {
			if (--this->ticks == 0) {
				this->ticking = false;
				this->expired = true;
			}
		}
		
		this = this->next;
	}
}


/* initializes an alarm and adds it to the linked list of registered alarms */
void alarm_register(struct alarm *alarm) {
	alarm->ticking = false;
	alarm->expired = false;
	
	alarm->next = first;
	ATOMIC_BLOCK(ATOMIC_RESTORESTATE) {
		first = alarm;
	}
}

/* removes an alarm from the linked list of registered alarms */
void alarm_unregister(struct alarm *alarm) {
	struct alarm *this = first, **prev_next = first;
	while (this != NULL) {
		if (this == alarm) {
			ATOMIC_BLOCK(ATOMIC_RESTORESTATE) {
				*prev_next = this->next;
			}
			return;
		}
		
		prev_next = &this->next;
		this = this->next;
	}
	
	assert(false);
}


/* starts the alarm ticking with the requested duration (milliseconds) */
void alarm_start(struct alarm *alarm, uint16_t duration) {
	alarm->ticks = duration;
	
	alarm->ticking = true;
	alarm->expired = false;
}

/* stops the alarm from ticking */
void alarm_stop(struct alarm *alarm) {
	alarm->ticking = false;
}


/* is the alarm currently ticking? */
bool alarm_ticking(struct alarm *alarm) {
	return alarm->ticking;
}

/* has the alarm expired? */
bool alarm_expired(struct alarm *alarm) {
	return alarm->expired;
}


#if 0
/* returns an alarm with the specified duration (milliseconds) */
struct alarm *alarm_new(int16_t duration) {
	struct alarm *alarm = malloc(sizeof(*alarm));
	assert(alarm != NULL);
	
	alarm->epoch    = timer0_count32();
	alarm->duration = duration;
	
	return alarm;
}

/* frees an alarm allocated earlier */
void alarm_free(struct alarm *alarm) {
	free(alarm);
}


bool alarm_expired(struct alarm *alarm) {
	uint32_t now  = timer0_count32();
	uint32_t when = alarm->epoch + alarm->duration;
	
	int32_t diff = (int32_t)(now - when);
	
	return (diff >= 0);
}
#endif
