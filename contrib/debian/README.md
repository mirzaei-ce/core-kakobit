
Debian
====================
This directory contains files used to package kakobitd/kakobit-qt
for Debian-based Linux systems. If you compile kakobitd/kakobit-qt yourself, there are some useful files here.

## kakobit: URI support ##


kakobit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install kakobit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your kakobit-qt binary to `/usr/bin`
and the `../../share/pixmaps/kakobit128.png` to `/usr/share/pixmaps`

kakobit-qt.protocol (KDE)

