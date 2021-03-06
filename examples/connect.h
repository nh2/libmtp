/**
 * \file connect.h
 * Header file for connect subfunctions
 *
 * Copyright (C) 2006 Chris A. Debenham <chris@adebenham.com>
 * Copyright (C) 2008-2010 Linus Walleij <triad@df.lth.se>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */
int delfile_function(char *);
LIBMTP_mtpdevice_t *delfile_device(int, char **);
int delfile_command(int, char **);
void delfile_usage(void);
int sendtrack_function (char *, char *, char *, char *, char *, char *, char *, char *, uint16_t, uint16_t, uint16_t, uint32_t, uint16_t);
int sendtrack_command (int, char **);
void sendtrack_usage(void);
int sendfile_function(char *,char *);
int sendfile_command(int, char **);
void sendfile_usage(void);
int getfile_function(char *,char *);
LIBMTP_mtpdevice_t *getfile_device(int, char **);
int getfile_command(int, char **);
void getfile_usage(void);
int newfolder_function(char *);
int newfolder_command(int,char **);
void newfolder_usage(void);
