Scylla and Charybdis
===

Okay, whatever you do, don't base your layout on this one - there's a reason I named it after ugly mythological monsters.

The hardware is a handwired clone of a 5-rows Helix keyboard, but apparently the Helix-firmware uses some other 
variation of i2c communication than let's split. Since I can't read chinese, I assumed all i2c communication must be
more or less equal and that's why the firmware doesn't really work on my boards.

The Let'sSplit firmware on the other hand communicates nicely and has an i2c-stack that even I can understand (more or less).
Long story short, I decided to redefine the physical layout defined in lets_split.h as well as the logical layout in rev2.h
That of course required me to redefine some stuff from config.h ans while I was at it, I probably broke a lot of other stuff, too.
Doesn't really matter to me, since my board works just nice-e :p

The keymapping allows me to use a US-ish layout when pairing with my colleagues on their germanized boxes.

All of this should convince you to moveover to more sane projects. Cu.


If you still insist on using this, run 
`make lets_split/rev2:scylla_n_charybdis:avrdude` to install the firmware. 
Godspeed.
