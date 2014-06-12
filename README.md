# raspbian-statusboard

An ansible playbook to take a [Raspberry Pi](http://www.raspberrypi.org/) running a fresh copy of [raspbian-readonly](https://github.com/goodeggs/raspbian-readonly) and modify it to act like a statusboard, that is it boots directly into a fullscreen browser pointed at a pre-configured URL.

An [on-screen configuration app](https://github.com/goodeggs/raspbian-statusboard-web) is installed, and can be accessed by holding down the SHIFT key during boot.  It provides a WiFi connection manager and a way to edit the URL.

## Prerequisites

* [ansible](http://www.ansible.com/)
* [sshpass](https://gist.github.com/arunoda/7790979)
* a Raspberry Pi running raspbian-readonly

## Running

Ensure the IP of your Pi is correctly specified in the `hosts` file (default is 192.168.2.2).  Then run:

```
ansible-playbook playbook.yml
```

That's it!

## Credits

* http://stackoverflow.com/questions/13657889/check-if-the-shift-key-is-currently-being-held-in-the-linux-text-fb-console
* http://www.niteoweb.com/blog/raspberry-pi-boot-to-browser

