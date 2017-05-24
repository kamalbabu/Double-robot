#!/bin/bash

echo $(ino build)
echo $(ino upload)
echo $(ino serial)
while true; do
	echo $(python3 client.py)
done

