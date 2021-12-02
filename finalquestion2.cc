Q2: 
==21254== 
==21254== HEAP SUMMARY:
==21254==     in use at exit: 0 bytes in 0 blocks
==21254==   total heap usage: 36 allocs, 36 frees, 5,737 bytes allocated
==21254== 
==21254== All heap blocks were freed -- no leaks are possible
==21254== 
==21254== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
==21254== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

From this output from valgrind, it can be said that wc has no memory leak issues upon being tested with valgrind.
