# SequentialSubstitutionChallenge
Find the fastest solution to solve a Sequential Substitution in a string

Given an integer N [1,1_000_000_000], return the shortest possible string generated in this way

generate a string made of N 'a'
scan the string and write another sting where:

* if you encounter two identical characters, write once the following character (i.e. 'aa' -> 'b' or 'ff' -> 'g')
* if you encounter a single not repeated char, write it (i.e. 'h' -> 'h')
* if you encounter the 'zz' sequence, write it

# Running Example

N=120

```
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
cccccccccccccccccccccccccccccc
ddddddddddddddd
eeeeeeed
fffed

gfed
```

# Examples provided

| input      | result |
|------------|:------:|
| 1          |   a    |
| 11         |  dba   |
| 67_108_876 |  zzdc  |

