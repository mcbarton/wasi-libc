//! filter.py(TARGET_TRIPLE): wasm32-wasip1-threads
//! add-flags.py(CFLAGS): -I.
//! add-flags.py(LDFLAGS): -Wl,--import-memory,--export-memory,--shared-memory,--max-memory=1073741824
//! add-flags.py(RUN): --wasi threads
#include "build/download/libc-test/src/functional/pthread_mutex.c"
