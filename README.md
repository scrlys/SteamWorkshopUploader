Steam Workshop Uploader
=======================

This is a standalone tool to upload Steam mods to the workshop.
This is a game-ambiguous tool so it works for nearly all games that require it.

Building
--------

The build system uses cmake, but you will need to set some parameters

    cmake -DSTEAM_INCLUDE=<path> -DSTEAM_LIB=<absolute path to libsteam_api.so>

Tested on Linux only, no Windows support yet
