

#include "Test.h"

namespace core {

    Test::Test() {
        
    }

    Test::~Test() {
    }

    void Test::Setup() {
    }

    void Test::TearDown() {
    }

    List<Test> *Test::GetTests() {
        if (tests == NULL) {
            tests = new List<Test>();
        }
        return tests;
    }

    void Test::AddTest(Test *t) {
        GetTests()->Add(t);
    }

    void Test::RunAllTests() {
        List<Test> *l = GetTests();
        for (Test *t = l->Begin(); !l->Finished(); t = l->Next()) {
            t->Run();
        }
    }

    List<Test> *Test::tests = NULL;
}

