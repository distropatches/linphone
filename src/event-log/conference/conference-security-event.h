/*
 * conference-security-event.h
 * Copyright (C) 2010-2018 Belledonne Communications SARL
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _L_CONFERENCE_SECURITY_EVENT_H_
#define _L_CONFERENCE_SECURITY_EVENT_H_

#include <string>

#include "conference-event.h"

// =============================================================================

LINPHONE_BEGIN_NAMESPACE

class ConferenceSecurityEventPrivate;

class LINPHONE_PUBLIC ConferenceSecurityEvent : public ConferenceEvent {
public:
	ConferenceSecurityEvent (
		time_t creationTime,
		const ConferenceId &conferenceId,
		const std::string &securityAlert
	);

	const std::string &getSecurityAlert () const;

private:
	L_DECLARE_PRIVATE(ConferenceSecurityEvent);
	L_DISABLE_COPY(ConferenceSecurityEvent);
};

LINPHONE_END_NAMESPACE

#endif // ifndef _L_CONFERENCE_SECURITY_EVENT_H_
