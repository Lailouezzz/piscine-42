#!/bin/sh
id $FT_USER -nG | tr ' ' ',' | tr -d '\n'