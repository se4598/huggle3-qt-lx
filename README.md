huggle3-qt-lx
=============

Huggle 3 QT-LX is an anti-vandalism tool for use on Wikipedia and other Wikimedia projects, written in C++ (QT framework).
It is supported for Windows and Linux

[![Build Status](https://travis-ci.org/huggle/huggle3-qt-lx.png?branch=master)](https://travis-ci.org/huggle/huggle3-qt-lx)

Building
=========

Libraries you need to have to build:
* GCC (gcc g++ make)
* QT4 sdk (libqt4-dev libqt4-webkit libqt4-network qt4-qmake libqtwebkit-dev libqt4-dev-bin qt4-dev-tools)
* (optional) QT5 sdk (libqt5webkit5-dev qt5-default qtquick1-5-dev qtlocation5-dev qtsensors5-dev qtdeclarative5-dev)
* (optional) Python (libpython-dev)

Windows
-------------

* Download QT Creator from http://qt-project.org/downloads
* Download OpenSSL and Visual C++ 2008 Redistributables from http://slproweb.com/products/Win32OpenSSL.html
* Checkout this repository
* Create empty version.txt in folder huggle
* Open huggle.pro in that and hit build

Linux
-------------

* checkout this repository
* cd REPO/huggle, execute

```sh
./configure
make
sudo make install
```

Python
------------
To enable python engine you need to:

* open huggle.pro and uncomment / add python library
* open config.hpp and uncomment PYTHONENGINE

now rebuild huggle and pray

If you manage to compile it, you can insert your .py extensions to HUGGLEROOT/extensions, for more
information ask for help on our irc channel.

Documentation
=============

Developers: http://tools.wmflabs.org/huggle/docs/head

This is a documentation for users: https://meta.wikimedia.org/wiki/Huggle

Getting help
=============

We have a channel irc://chat.freenode.org/#huggle so if you need any kind of help please go there

Contributing
=============

Everyone is allowed to send the pull requests to this repository, and all regular contributors
get a developer access to directly push if they need it. If you want to join a huggle
developer team, please see https://meta.wikimedia.org/wiki/Huggle/Members and insert yourself

This repository is running CI using travis, if you want to change anything what doesn't require
sanity check, like documentation or comments, please append [ci skip] to your message

Reporting bugs
===============

Please use https://bugzilla.wikimedia.org/enter_bug.cgi?product=Huggle
