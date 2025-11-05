#pragma once

template <typename T>
class CVectorNode {
private:
	CVectorNode() { }
	~CVectorNode() { }

private:
	template <typename U>
	friend class CVector;

private:
	T data;
	int index;
};

template <typename T>
class CVector
{
public:
	CVector() {
		size = 0;
		capacity = 2;

		arr = new NODE[capacity + 2];
	}
	~CVector() {
		delete[] arr;
	}

private:
	typedef CVectorNode<T> NODE;
	typedef CVectorNode<T>* PNODE;

private:
	PNODE arr;
	unsigned int size;
	unsigned int capacity;

public:
	void push_back(const T& data) {
		if (full()) resize(size * 2);

		size++;
		arr[size].data = data;
		arr[size].index = size;
	}

	void resize(int newSize) {
		capacity = newSize;
		PNODE new_arr = new NODE[capacity + 2];

		memcpy(new_arr + 1, arr + 1, sizeof(NODE) * size);
		delete[] arr;
		arr = new_arr;
	}

	bool full() { return size == capacity; }
	bool empty() { return size == 0; }
	unsigned int getSize() const { return size; }
	unsigned int getCapacity() const { return capacity; }
};