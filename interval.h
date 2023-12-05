#pragma once

class interval {
  public:
	  double min, max;

	  interval() : min(+inf), max(-inf) {} // Default interval is empty

	  interval(double _min, double _max) : min(_min), max(_max) {}

	  bool contains(double x) const {
		  return min <= x && x <= max;
	  }

	  bool surrounds(double x) const {
		  return min < x && x < max;
	  }

	  double clamp(double x) const {
		  if (x < min) return min;
		  if (x > max) return max;
		  return x;
	  }

	  static const interval empty, universe;
};

static const interval empty(+inf, -inf);
static const interval universe(-inf, +inf);