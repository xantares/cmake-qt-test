#include <QtTest/QtTest>

class TestHello : public QObject
{
  Q_OBJECT

public:

private slots:
  void Test1()
  {
    QVERIFY2(1 == 1, "test1");
  }

  void Test2()
  {
    QVERIFY2(1 == 2, "test2");
  }
};


QTEST_MAIN(TestHello)
#include "hello.moc"
