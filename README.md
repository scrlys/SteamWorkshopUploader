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

Tested on Linux and Windows, no Mac OSX support yet.

Windows
-------

Since Windows likes to mess up, you will need to manually set the .lib file
needed.

To do so, run the initial cmake, then open the solution file. Under
the SteamWorkshopUploader project, right-click and select Properties. Go to
Configuration Properties then Linker then Input on the left side. On the right,
under Additional Dependencies, change steam_api-NOTFOUND to steam_api.lib

If running release build, don't forget to switch targets and do the same.

Run

    cmake --build .
	
after and it should work. For releases, run

    cmake --build . --config Release