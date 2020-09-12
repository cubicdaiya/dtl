#ifndef DTL_STORAGE
#define DTL_STORAGE

#include <dtl/dtl.hpp>

template <typename sesElem, typename storedData >
class CustomStorage : public dtl::Storage < sesElem, storedData >
{
public :
    CustomStorage(storedData& sd) : dtl::Storage < sesElem, storedData > (sd) {}
    ~CustomStorage() {}
    void operator() (const sesElem& se) const {
        switch (se.second.type) {
        case dtl::SES_ADD:
            this->storedData_ = this->storedData_ + "Add: " + se.first + "\n";
            break;
        case dtl::SES_DELETE:
            this->storedData_ = this->storedData_ + "Delete: " + se.first + "\n";
            break;
        case dtl::SES_COMMON:
            this->storedData_ = this->storedData_ + "Common: " + se.first + "\n";
            break;
        }
    }
};

#endif // DTL_STORAGE
