#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_CA2/CircularQueue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ADSCA2UnitTests
{
	TEST_CLASS(ADSCA2UnitTests)
	{
	public:

		//CircularQueue<int> queue(3);

		//TEST_METHOD_INITIALIZE(StartTests) {
		//	//add content to the queue
		//	queue.Enqueue(15);
		//	queue.Enqueue(25);
		//	queue.Enqueue(35);
		//}

		//TEST_METHOD_CLEANUP(EndTests) {
		//	//remove/clear contents
		//	queue.clear();
		//}

		TEST_METHOD(TestQueueSizePass)
		{
			CircularQueue<int> queue(3);
			queue.Enqueue(15);
			queue.Enqueue(25);
			queue.Enqueue(35);
			int size = queue.size();
			Assert::AreEqual(size, 3);
			queue.clear();
		}

		/// @brief This tests for returning 0 from an empty queue
		TEST_METHOD(TestQueueSizeFail)
		{
			CircularQueue<int> queue(3);
			int size = queue.size();
			Assert::AreNotEqual(size, 3);
			queue.clear();
		}
	};
}