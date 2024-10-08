#include <glog/logging.h>
#include <armadillo>
#include <gtest/gtest.h>

TEST(test_first, demo1) {
  LOG(INFO) << "The first test of Tapir!";
  arma::fmat in_1(32, 32, arma::fill::ones);
  ASSERT_EQ(in_1.n_cols, 32);
  ASSERT_EQ(in_1.n_rows, 32);
  ASSERT_EQ(in_1.size(), 32 * 32);
}