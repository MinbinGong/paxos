/*
	Copyright (C) 2013 University of Lugano

	This file is part of LibPaxos.

	LibPaxos is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Libpaxos is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with LibPaxos.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _QUORUM_H_
#define _QUORUM_H_

#include "libpaxos.h"

struct quorum
{
	int count;
	int quorum;
	int acceptor_ids[N_OF_ACCEPTORS];
};

void quorum_init(struct quorum *q, int quorum);
int quorum_add(struct quorum* q, int id);
int quorum_reached(struct quorum* q);

#endif
