#include <pdf.h>
#include <pthread.h>
#include <stdlib.h>

// indent -linux -br -brf

fz_context *cgo_fz_new_context(const fz_alloc_context * alloc,
			       const fz_locks_context * locks,
			       size_t max_store);
int cgo_ptr_cast(ptrdiff_t ptr);
fz_document *cgo_open_document(fz_context *ctx, const char *filename, const char *default_ext);
fz_document *open_document_with_extension(fz_context *ctx, const char *filename, const char *default_ext);
void cgo_drop_document(fz_context *ctx, fz_document *doc);
void lock_mutex(void *locks, int lock_no);
void unlock_mutex(void *locks, int lock_no);
fz_locks_context *new_locks();
void free_locks(fz_locks_context ** locks);
int get_rotation(fz_context *ctx, fz_page *page);
fz_page *load_page(fz_context *ctx, fz_document *doc, int number);