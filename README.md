Verbose Sleep
======
------------

This program is a simple C++ program designed to be a verbose sleep command.

When executed, it will count down while sleeping for the specified number of seconds.

Usage
======
----------

- vsleep [t:seconds]
- vsleep   - Prints usage


Compiling
=======
-------

```bash
mkdir build
cd build

cmake ..
make
```

Installation
=======
-----

See the above compile steps first.
```bash
make install
```

Will place the vsleep executables into `/usr/bin` on linux.


On windows, manual installation into a directory in your %PATH% will be required.