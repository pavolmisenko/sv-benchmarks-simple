import glob
import os
import json

ROOT = '/usr/src/sv-benchmarks-c-reachsafety/'

sets = { "array-examples/*.c", "array-industry-pattern/*.c", "reducercommutativity/*.c", "array-tiling/*.c", "array-programs/*.c", "array-crafted/*.c", "array-multidimensional/*.c", "array-patterns/*.c", "array-cav19/*.c", "array-lopstr16/*.c", "array-fpi/*.c", "bitvector-regression/*.c", "bitvector-loops/*.c", "combinations/*.c", "ntdrivers-simplified/*.c", "openssl-simplified/*.c", "locks/*.c", "ntdrivers/*.c", "openssl/*.c", "eca-rers2012/*.c", "eca-rers2018/*.c", "psyco/*.c", "eca-programs/*.c", "floats-cdfpl/*.c", "floats-cbmc-regression/*.c", "float-benchs/*.c", "floats-esbmc-regression/*.c", "float-newlib/*.c", "loop-floats-scientific-comp/*.c", "heap-manipulation/*.c", "list-properties/*.c", "ldv-regression/*.c", "ddv-machzwd/*.c", "forester-heap/*.c", "list-ext-properties/*.c", "list-ext2-properties/*.c", "ldv-sets/*.c", "list-simple/*.c", "heap-data/*.c", "list-ext3-properties/*.c", "loops/*.c", "loop-acceleration/*.c", "loop-crafted/*.c", "loop-invgen/*.c", "loop-lit/*.c", "loop-new/*.c", "loop-industry-pattern/*.c", "loops-crafted-1/*.c", "loop-invariants/*.c", "loop-simple/*.c", "loop-zilu/*.c", "verifythis/duplets.c", "verifythis/elimination_max.c", "verifythis/lcp.c", "verifythis/prefixsum_iter.c", "verifythis/tree_del_iter.c", "verifythis/tree_del_iter_incorrect.c", "nla-digbench/*.c", "nla-digbench-scaling/*.c", "product-lines/*.c", "recursive/*.c", "recursive-simple/*.c", "recursive-with-pointer/*.c", "verifythis/prefixsum_rec.c", "verifythis/tree_del_rec.c", "verifythis/tree_del_rec_incorrect.c", "verifythis/tree_max.c", "verifythis/tree_max_incorrect.c", "verifythis/elimination_max_rec.c", "verifythis/elimination_max_rec_onepoint.c", "systemc/*.c", "seq-mthreaded/*.c", "seq-mthreaded-reduced/*.c", "seq-pthread/*.c", "xcsp/*.c"}
tasks = []

for test_set in sets:
	for test in glob.glob(test_set)
		tasks.append(os.path.join(ROOT, 'c', test))

print(json.dumps(tasks))