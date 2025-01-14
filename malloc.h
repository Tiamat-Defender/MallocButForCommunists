#include <windows.h>

//its not mymalloc its OURMALLOC
void OURMALLOC(int size, void** val) {

    void* memory = VirtualAlloc(NULL, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    *val = memory;

}

void OURFREE(void* memory) {

    if(memory) {
        
        VirtualFree(memory, 0 , MEM_RELEASE);

    }
}