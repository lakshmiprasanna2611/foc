#!/bin/sh
echo "enter first number:"
read first
echo "enter second number:"
read second
temp=$first
first=$second
second=$temp
echo "after swaping:"
echo "first number=$first,second number=$second"
