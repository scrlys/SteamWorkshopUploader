Steam Workshop Uploader
=======================

This is a standalone tool to upload Steam mods to the workshop.
This is a game-ambiguous tool so it works for nearly all games that require it.

Building
--------

The build system uses cmake, but you will need to set some parameters.
This will also assume that Steam's library is in the same directory as
the executable.

    cmake -DSTEAM_INCLUDE=<path>

Tested on Linux only, no Windows or Mac OSX support yet
