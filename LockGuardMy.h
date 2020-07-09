namespace myLG {
	template<class T>
	class LockGuardMy {
	private:
		T * mutex;

	public:
		LockGuardMy(T * mutex) {
			this->mutex = mutex;

			mutex->lock();
		}

		~LockGuardMy() {
			this->mutex->unlock();
		}
	};
}