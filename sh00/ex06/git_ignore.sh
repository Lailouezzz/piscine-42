#!/bin/bash
(cd `eval "git rev-parse --show-toplevel"` && git check-ignore */.** */**)
