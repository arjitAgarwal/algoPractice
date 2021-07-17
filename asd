gcc -c -o merge_sort.o merge_sort.c -I.
gcc -o output merge_sort.o utils.o main.o -I.

Before Sort -  89383, 30886, 92777, 36915, 47793, 38335, 85386, 60492, 16649, 41421

Init - 1 -  Start is 0 end is 9  89383, 30886, 92777, 36915, 47793, 38335, 85386, 60492, 16649, 41421

Init -  Start is 0 end is 9  89383, 30886, 92777, 36915, 47793, 38335, 85386, 60492, 16649, 41421

First Split -  Start is 0 end is 4  89383, 30886, 92777, 36915, 47793

Init -  Start is 0 end is 4  89383, 30886, 92777, 36915, 47793

First Split -  Start is 0 end is 1  89383, 30886

Init -  Start is 0 end is 1  89383, 30886

First Split -  Start is 0 end is 0  89383

Second Split -  Start is 1 end is 1  , 30886

After split -  Start is 0 end is 1  89383, 30886

After merge -  Start is 0 end is 1  30886, 89383

Second Split -  Start is 2 end is 4  , 92777, 36915, 47793

Init -  Start is 2 end is 4  , 92777, 36915, 47793

First Split -  Start is 2 end is 2  , 92777

Second Split -  Start is 3 end is 4  , 36915, 47793

Init -  Start is 3 end is 4  , 36915, 47793

First Split -  Start is 3 end is 3  , 36915

Second Split -  Start is 4 end is 4  , 47793

After split -  Start is 3 end is 4  , 36915, 47793

After merge -  Start is 3 end is 4  , 36915, 47793

After split -  Start is 2 end is 4  , 92777, 36915, 47793

After merge -  Start is 2 end is 4  , 47793, 36915, 92777

After split -  Start is 0 end is 4  30886, 89383, 47793, 36915, 92777

After merge -  Start is 0 end is 4  30886, 89383, 47793, 36915, 92777

Second Split -  Start is 5 end is 9  , 38335, 85386, 60492, 16649, 41421

Init -  Start is 5 end is 9  , 38335, 85386, 60492, 16649, 41421

First Split -  Start is 5 end is 6  , 38335, 85386

Init -  Start is 5 end is 6  , 38335, 85386

First Split -  Start is 5 end is 5  , 38335

Second Split -  Start is 6 end is 6  , 85386

After split -  Start is 5 end is 6  , 38335, 85386

After merge -  Start is 5 end is 6  , 38335, 85386

Second Split -  Start is 7 end is 9  , 60492, 16649, 41421

Init -  Start is 7 end is 9  , 60492, 16649, 41421

First Split -  Start is 7 end is 7  , 60492

Second Split -  Start is 8 end is 9  , 16649, 41421

Init -  Start is 8 end is 9  , 16649, 41421

First Split -  Start is 8 end is 8  , 16649

Second Split -  Start is 9 end is 9  , 41421

After split -  Start is 8 end is 9  , 16649, 41421

After merge -  Start is 8 end is 9  , 16649, 41421

After split -  Start is 7 end is 9  , 60492, 16649, 41421

After merge -  Start is 7 end is 9  , 41421, 16649, 60492

After split -  Start is 5 end is 9  , 38335, 85386, 41421, 16649, 60492

After merge -  Start is 5 end is 9  , 38335, 60492, 16649, 41421, 85386

After split -  Start is 0 end is 9  30886, 89383, 47793, 36915, 92777, 38335, 60492, 16649, 41421, 85386

After merge -  Start is 0 end is 9  30886, 85386, 41421, 16649, 60492, 38335, 89383, 47793, 36915, 92777

After Sort -  30886, 85386, 41421, 16649, 60492, 38335, 89383, 47793, 36915, 92777
