#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

namespace core {

    class Test {
    private:
        static List<Test> *tests;
        static List<Test> *GetTests();
        
    public:
        Test();
        virtual ~Test();

        virtual void Setup();
        virtual void TearDown();

        virtual void Run() = 0;

        static void AddTest(Test *t);
        static void RunAllTests();
    };

}

#endif // TEST_H_INCLUDED
