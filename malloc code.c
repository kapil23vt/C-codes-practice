#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>


void *malloc(size_t size) {

    // sbrk = function used to change the amount of space allocated for the calling process
    void *p = sbrk(0);

    // requesting space using sbrk call
    void *request = sbrk(size);

    // check the request processed by sbrk function
    if (request == NULL)
    {
        return NULL; // cant allocate memory
    }
    else
    {
        // for the block, create TempPointer and return it
        assert(TempPointer = request);
        return TempPointer;
    }
}
