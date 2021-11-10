#!/bin/bash
echo -e
touch $1/$2div$3$4.cpp
echo "#include <bits/stdc++.h>" >> $1/$2div$3$4.cpp
echo "using namespace std;" >> $1/$2div$3$4.cpp
echo "#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)" >> $1/$2div$3$4.cpp
echo "typedef long long ll;" >> $1/$2div$3$4.cpp
echo  >> $1/$2div$3$4.cpp
echo "int main() {" >> $1/$2div$3$4.cpp
echo  >> $1/$2div$3$4.cpp
echo "  return 0;" >> $1/$2div$3$4.cpp
echo "}" >> $1/$2div$3$4.cpp