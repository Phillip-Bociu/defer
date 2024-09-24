#pragma once
template<typename Fn>
class _deferClass {
	public:
	_deferClass(Fn&& fn): fn(fn){}
	~_deferClass() { fn(); }
	private:
	Fn fn;
};

#define CONCAT(a, b) a##b
#define CONCAT2(a, b) CONCAT(a, b)
#define MAKE_DEFER_NAME() CONCAT2(anon_deferVar_, __COUNTER__)
#define defer const _deferClass MAKE_DEFER_NAME() = [&]() 

