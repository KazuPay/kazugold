
Debian
====================
This directory contains files used to package kazugoldd/kazugold-qt
for Debian-based Linux systems. If you compile kazugoldd/kazugold-qt yourself, there are some useful files here.

## kazugold: URI support ##


kazugold-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install kazugold-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your kazugold-qt binary to `/usr/bin`
and the `../../share/pixmaps/kazugold128.png` to `/usr/share/pixmaps`

kazugold-qt.protocol (KDE)

