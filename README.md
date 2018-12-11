fasttracker2-pkgsrc
===================

NetBSD [pkgsrc][3] script for Fasttracker II clone.

You can find Fasttracker II clone [here][1]

Installation
------------

Copy `audio/fasttracker2` folder to `/usr/pkgsrc` directory.

NOTE: If your pkgsrc directory is different from above, copy to the respective
place.

Usage
-----

Once you have copied the folder, install it as you would do for any package.

`$ cd /usr/pkgsrc/audio/fasttracker2`<br>
`$ make install clean`

For a list of dependencies for the build check [here][1]

NOTE: If you are using pkgsrc in a non NetBSD system, replace `make` with
`bmake` in the above example.

Credits
-------

* The Fasttracker II clone was originally written by [Olav Sørensen][2]
* `mlelstv@` for helping me debug the `iconv(3)` issue.
* `@coypoop` for reviewing the package and testing it.

License
-------

BSD 2-clause. See LICENSE.

[1]: https://16-bits.org/ft2.php
[2]: https://twitter.com/8bitbubsy
[3]: http://pkgsrc.se/audio/fasttracker2
