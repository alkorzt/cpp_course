#ifndef H_SCOPEDPTR
#define H_SCOPEDPTR

template <typename T>
class ScopedPtr {
public:
    explicit ScopedPtr(T * ptr);
    ~ScopedPtr();    
    T& operator*();
    T* operator->();
private:
    T* ptr;
};

#endif
