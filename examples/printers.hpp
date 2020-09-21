#ifndef DTL_PRINTERS
#define DTL_PRINTERS

#include <dtl/dtl.hpp>

template <typename sesElem, typename stream = ostream >
class customChangePrinter : public dtl::Printer < sesElem, stream >
{
public :
    customChangePrinter () : dtl::Printer < sesElem, stream > () {}
    customChangePrinter (stream& out) : dtl::Printer < sesElem, stream > (out) {}
    ~customChangePrinter () {}
    void operator() (const sesElem& se) const {
        switch (se.second.type) {
        case dtl::SES_ADD:
            this->out_ << "Add: " << se.first << std::endl;
            break;
        case dtl::SES_DELETE:
            this->out_ << "Delete: " << se.first << std::endl;
            break;
        case dtl::SES_COMMON:
            this->out_ << "Common: " << se.first << std::endl;
            break;
        }
    }
};

#endif // DTL_PRINTERS
