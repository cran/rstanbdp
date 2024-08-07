// Generated by rstantools.  Do not edit by hand.

/*
    rstanbdp is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    rstanbdp is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with rstanbdp.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model_bdpreg_linhet_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 49> locations_array__ =
  {" (found before start of program)",
  " (in 'bdpreg_linhet', line 46, column 2 to column 17)",
  " (in 'bdpreg_linhet', line 47, column 2 to column 13)",
  " (in 'bdpreg_linhet', line 48, column 2 to column 23)",
  " (in 'bdpreg_linhet', line 49, column 2 to column 12)",
  " (in 'bdpreg_linhet', line 54, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 54, column 2 to column 17)",
  " (in 'bdpreg_linhet', line 55, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 55, column 2 to column 16)",
  " (in 'bdpreg_linhet', line 56, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 56, column 2 to column 17)",
  " (in 'bdpreg_linhet', line 57, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 57, column 2 to column 17)",
  " (in 'bdpreg_linhet', line 58, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 58, column 2 to column 17)",
  " (in 'bdpreg_linhet', line 59, column 5 to column 34)",
  " (in 'bdpreg_linhet', line 60, column 5 to column 18)",
  " (in 'bdpreg_linhet', line 61, column 5 to column 60)",
  " (in 'bdpreg_linhet', line 62, column 5 to column 43)",
  " (in 'bdpreg_linhet', line 64, column 5 to column 55)",
  " (in 'bdpreg_linhet', line 63, column 20 to line 65, column 1)",
  " (in 'bdpreg_linhet', line 63, column 5 to line 65, column 1)",
  " (in 'bdpreg_linhet', line 66, column 2 to column 49)",
  " (in 'bdpreg_linhet', line 67, column 2 to column 37)",
  " (in 'bdpreg_linhet', line 68, column 2 to column 43)",
  " (in 'bdpreg_linhet', line 68, column 39 to column 40)",
  " (in 'bdpreg_linhet', line 69, column 2 to column 63)",
  " (in 'bdpreg_linhet', line 69, column 49 to column 61)",
  " (in 'bdpreg_linhet', line 69, column 36 to column 48)",
  " (in 'bdpreg_linhet', line 70, column 2 to column 48)",
  " (in 'bdpreg_linhet', line 25, column 2 to column 18)",
  " (in 'bdpreg_linhet', line 26, column 2 to column 28)",
  " (in 'bdpreg_linhet', line 27, column 2 to column 18)",
  " (in 'bdpreg_linhet', line 28, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 28, column 2 to column 14)",
  " (in 'bdpreg_linhet', line 29, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 29, column 2 to column 14)",
  " (in 'bdpreg_linhet', line 30, column 9 to column 10)",
  " (in 'bdpreg_linhet', line 30, column 2 to column 18)",
  " (in 'bdpreg_linhet', line 32, column 2 to column 15)",
  " (in 'bdpreg_linhet', line 33, column 2 to column 18)",
  " (in 'bdpreg_linhet', line 34, column 2 to column 19)",
  " (in 'bdpreg_linhet', line 35, column 2 to column 22)",
  " (in 'bdpreg_linhet', line 36, column 2 to column 15)",
  " (in 'bdpreg_linhet', line 37, column 2 to column 18)",
  " (in 'bdpreg_linhet', line 38, column 2 to column 14)",
  " (in 'bdpreg_linhet', line 39, column 2 to column 17)",
  " (in 'bdpreg_linhet', line 40, column 2 to column 20)",
  " (in 'bdpreg_linhet', line 41, column 2 to column 20)"};
#include <stan_meta_header.hpp>
class model_bdpreg_linhet final : public model_base_crtp<model_bdpreg_linhet> {
private:
  int N;
  double ErrorRatio;
  int df;
  Eigen::Matrix<double,-1,1> X_data__;
  Eigen::Matrix<double,-1,1> Y_data__;
  Eigen::Matrix<double,-1,1> avgXY_data__;
  double slopeMu;
  double slopeSigma;
  double interceptMu;
  double interceptSigma;
  double AlphaMu;
  double AlphaSigma;
  double BetaMu;
  double BetaSigma;
  double BetaTruncMin;
  double BetaTruncMax;
  Eigen::Map<Eigen::Matrix<double,-1,1>> X{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> Y{nullptr, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> avgXY{nullptr, 0};
public:
  ~model_bdpreg_linhet() {}
  model_bdpreg_linhet(stan::io::var_context& context__, unsigned int
                      random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model_bdpreg_linhet_namespace::model_bdpreg_linhet";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 30;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 30;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 30;
      stan::math::check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 31;
      context__.validate_dims("data initialization", "ErrorRatio", "double",
        std::vector<size_t>{});
      ErrorRatio = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 31;
      ErrorRatio = context__.vals_r("ErrorRatio")[(1 - 1)];
      current_statement__ = 31;
      stan::math::check_greater_or_equal(function__, "ErrorRatio",
        ErrorRatio, 0);
      current_statement__ = 32;
      context__.validate_dims("data initialization", "df", "int",
        std::vector<size_t>{});
      df = std::numeric_limits<int>::min();
      current_statement__ = 32;
      df = context__.vals_i("df")[(1 - 1)];
      current_statement__ = 32;
      stan::math::check_greater_or_equal(function__, "df", df, 0);
      current_statement__ = 33;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 34;
      context__.validate_dims("data initialization", "X", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      X_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                   std::numeric_limits<double>::quiet_NaN());
      new (&X) Eigen::Map<Eigen::Matrix<double,-1,1>>(X_data__.data(), N);
      {
        std::vector<local_scalar_t__> X_flat__;
        current_statement__ = 34;
        X_flat__ = context__.vals_r("X");
        current_statement__ = 34;
        pos__ = 1;
        current_statement__ = 34;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 34;
          stan::model::assign(X, X_flat__[(pos__ - 1)],
            "assigning variable X", stan::model::index_uni(sym1__));
          current_statement__ = 34;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 35;
      stan::math::validate_non_negative_index("Y", "N", N);
      current_statement__ = 36;
      context__.validate_dims("data initialization", "Y", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      Y_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                   std::numeric_limits<double>::quiet_NaN());
      new (&Y) Eigen::Map<Eigen::Matrix<double,-1,1>>(Y_data__.data(), N);
      {
        std::vector<local_scalar_t__> Y_flat__;
        current_statement__ = 36;
        Y_flat__ = context__.vals_r("Y");
        current_statement__ = 36;
        pos__ = 1;
        current_statement__ = 36;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 36;
          stan::model::assign(Y, Y_flat__[(pos__ - 1)],
            "assigning variable Y", stan::model::index_uni(sym1__));
          current_statement__ = 36;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 37;
      stan::math::validate_non_negative_index("avgXY", "N", N);
      current_statement__ = 38;
      context__.validate_dims("data initialization", "avgXY", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      avgXY_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                       std::numeric_limits<double>::quiet_NaN());
      new (&avgXY)
        Eigen::Map<Eigen::Matrix<double,-1,1>>(avgXY_data__.data(), N);
      {
        std::vector<local_scalar_t__> avgXY_flat__;
        current_statement__ = 38;
        avgXY_flat__ = context__.vals_r("avgXY");
        current_statement__ = 38;
        pos__ = 1;
        current_statement__ = 38;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 38;
          stan::model::assign(avgXY, avgXY_flat__[(pos__ - 1)],
            "assigning variable avgXY", stan::model::index_uni(sym1__));
          current_statement__ = 38;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 39;
      context__.validate_dims("data initialization", "slopeMu", "double",
        std::vector<size_t>{});
      slopeMu = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 39;
      slopeMu = context__.vals_r("slopeMu")[(1 - 1)];
      current_statement__ = 40;
      context__.validate_dims("data initialization", "slopeSigma", "double",
        std::vector<size_t>{});
      slopeSigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 40;
      slopeSigma = context__.vals_r("slopeSigma")[(1 - 1)];
      current_statement__ = 41;
      context__.validate_dims("data initialization", "interceptMu", "double",
        std::vector<size_t>{});
      interceptMu = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 41;
      interceptMu = context__.vals_r("interceptMu")[(1 - 1)];
      current_statement__ = 42;
      context__.validate_dims("data initialization", "interceptSigma",
        "double", std::vector<size_t>{});
      interceptSigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 42;
      interceptSigma = context__.vals_r("interceptSigma")[(1 - 1)];
      current_statement__ = 43;
      context__.validate_dims("data initialization", "AlphaMu", "double",
        std::vector<size_t>{});
      AlphaMu = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 43;
      AlphaMu = context__.vals_r("AlphaMu")[(1 - 1)];
      current_statement__ = 44;
      context__.validate_dims("data initialization", "AlphaSigma", "double",
        std::vector<size_t>{});
      AlphaSigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 44;
      AlphaSigma = context__.vals_r("AlphaSigma")[(1 - 1)];
      current_statement__ = 45;
      context__.validate_dims("data initialization", "BetaMu", "double",
        std::vector<size_t>{});
      BetaMu = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 45;
      BetaMu = context__.vals_r("BetaMu")[(1 - 1)];
      current_statement__ = 46;
      context__.validate_dims("data initialization", "BetaSigma", "double",
        std::vector<size_t>{});
      BetaSigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 46;
      BetaSigma = context__.vals_r("BetaSigma")[(1 - 1)];
      current_statement__ = 47;
      context__.validate_dims("data initialization", "BetaTruncMin",
        "double", std::vector<size_t>{});
      BetaTruncMin = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 47;
      BetaTruncMin = context__.vals_r("BetaTruncMin")[(1 - 1)];
      current_statement__ = 48;
      context__.validate_dims("data initialization", "BetaTruncMax",
        "double", std::vector<size_t>{});
      BetaTruncMax = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 48;
      BetaTruncMax = context__.vals_r("BetaTruncMax")[(1 - 1)];
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + 1 + 1 + 1;
  }
  inline std::string model_name() const final {
    return "model_bdpreg_linhet";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --allow-undefined"};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "model_bdpreg_linhet_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ intercept = DUMMY_VAR__;
      current_statement__ = 1;
      intercept = in__.template read<local_scalar_t__>();
      local_scalar_t__ slope = DUMMY_VAR__;
      current_statement__ = 2;
      slope = in__.template read<local_scalar_t__>();
      local_scalar_t__ Alpha = DUMMY_VAR__;
      current_statement__ = 3;
      Alpha = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      local_scalar_t__ Beta = DUMMY_VAR__;
      current_statement__ = 4;
      Beta = in__.template read<local_scalar_t__>();
      {
        current_statement__ = 5;
        stan::math::validate_non_negative_index("Pred", "N", N);
        Eigen::Matrix<local_scalar_t__,-1,1> Pred =
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(N, DUMMY_VAR__);
        current_statement__ = 7;
        stan::math::validate_non_negative_index("Dis", "N", N);
        Eigen::Matrix<local_scalar_t__,-1,1> Dis =
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(N, DUMMY_VAR__);
        current_statement__ = 9;
        stan::math::validate_non_negative_index("HatX", "N", N);
        Eigen::Matrix<local_scalar_t__,-1,1> HatX =
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(N, DUMMY_VAR__);
        current_statement__ = 11;
        stan::math::validate_non_negative_index("HatY", "N", N);
        Eigen::Matrix<local_scalar_t__,-1,1> HatY =
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(N, DUMMY_VAR__);
        current_statement__ = 13;
        stan::math::validate_non_negative_index("Opti", "N", N);
        Eigen::Matrix<local_scalar_t__,-1,1> Opti =
          Eigen::Matrix<local_scalar_t__,-1,1>::Constant(N, DUMMY_VAR__);
        current_statement__ = 15;
        stan::model::assign(Pred,
          stan::math::add(stan::math::multiply(X, slope), intercept),
          "assigning variable Pred");
        current_statement__ = 16;
        stan::model::assign(Dis, stan::math::subtract(Y, Pred),
          "assigning variable Dis");
        current_statement__ = 17;
        stan::model::assign(HatX,
          stan::math::add(X,
            stan::math::divide(
              stan::math::multiply(stan::math::multiply(ErrorRatio, Dis),
                slope), (1 + (ErrorRatio * stan::math::pow(slope, 2))))),
          "assigning variable HatX");
        current_statement__ = 18;
        stan::model::assign(HatY,
          stan::math::subtract(Y,
            stan::math::divide(Dis, (1 + (ErrorRatio *
              stan::math::pow(slope, 2))))), "assigning variable HatY");
        current_statement__ = 21;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 19;
          stan::model::assign(Opti,
            stan::math::sqrt(
              (stan::math::pow(
                 (stan::model::rvalue(X, "X", stan::model::index_uni(n)) -
                 stan::model::rvalue(HatX, "HatX", stan::model::index_uni(n))),
                 2) +
              stan::math::pow(
                (stan::model::rvalue(Y, "Y", stan::model::index_uni(n)) -
                stan::model::rvalue(HatY, "HatY", stan::model::index_uni(n))),
                2))), "assigning variable Opti", stan::model::index_uni(n));
        }
        current_statement__ = 22;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(intercept,
                         interceptMu, interceptSigma));
        current_statement__ = 23;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(slope, slopeMu,
                         slopeSigma));
        current_statement__ = 24;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(Alpha, AlphaMu,
                         AlphaSigma));
        current_statement__ = 25;
        if (stan::math::logical_lt(Alpha, 0)) {
          current_statement__ = 25;
          lp_accum__.add(stan::math::negative_infinity());
        } else {
          current_statement__ = 25;
          lp_accum__.add(-stan::math::normal_lccdf(0, AlphaMu, AlphaSigma));
        }
        current_statement__ = 26;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(Beta, BetaMu,
                         BetaSigma));
        current_statement__ = 28;
        if (stan::math::logical_lt(Beta, BetaTruncMin)) {
          current_statement__ = 28;
          lp_accum__.add(stan::math::negative_infinity());
        } else {
          current_statement__ = 27;
          if (stan::math::logical_gt(Beta, BetaTruncMax)) {
            current_statement__ = 27;
            lp_accum__.add(stan::math::negative_infinity());
          } else {
            current_statement__ = 27;
            lp_accum__.add(-stan::math::log_diff_exp(
                              stan::math::normal_lcdf(BetaTruncMax, BetaMu,
                                BetaSigma),
                              stan::math::normal_lcdf(BetaTruncMin, BetaMu,
                                BetaSigma)));
          }
        }
        current_statement__ = 29;
        lp_accum__.add(stan::math::student_t_lpdf<propto__>(Opti, df, 0,
                         stan::math::add(Alpha,
                           stan::math::multiply(Beta, avgXY))));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model_bdpreg_linhet_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double intercept = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      intercept = in__.template read<local_scalar_t__>();
      double slope = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 2;
      slope = in__.template read<local_scalar_t__>();
      double Alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      Alpha = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      double Beta = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      Beta = in__.template read<local_scalar_t__>();
      out__.write(intercept);
      out__.write(slope);
      out__.write(Alpha);
      out__.write(Beta);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ intercept = DUMMY_VAR__;
      current_statement__ = 1;
      intercept = in__.read<local_scalar_t__>();
      out__.write(intercept);
      local_scalar_t__ slope = DUMMY_VAR__;
      current_statement__ = 2;
      slope = in__.read<local_scalar_t__>();
      out__.write(slope);
      local_scalar_t__ Alpha = DUMMY_VAR__;
      current_statement__ = 3;
      Alpha = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, Alpha);
      local_scalar_t__ Beta = DUMMY_VAR__;
      current_statement__ = 4;
      Beta = in__.read<local_scalar_t__>();
      out__.write(Beta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "intercept",
        "double", std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "slope", "double",
        std::vector<size_t>{});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "Alpha", "double",
        std::vector<size_t>{});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "Beta", "double",
        std::vector<size_t>{});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ intercept = DUMMY_VAR__;
      current_statement__ = 1;
      intercept = context__.vals_r("intercept")[(1 - 1)];
      out__.write(intercept);
      local_scalar_t__ slope = DUMMY_VAR__;
      current_statement__ = 2;
      slope = context__.vals_r("slope")[(1 - 1)];
      out__.write(slope);
      local_scalar_t__ Alpha = DUMMY_VAR__;
      current_statement__ = 3;
      Alpha = context__.vals_r("Alpha")[(1 - 1)];
      out__.write_free_lb(0, Alpha);
      local_scalar_t__ Beta = DUMMY_VAR__;
      current_statement__ = 4;
      Beta = context__.vals_r("Beta")[(1 - 1)];
      out__.write(Beta);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"intercept", "slope", "Alpha", "Beta"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{}, std::vector<size_t>{},
                std::vector<size_t>{}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "intercept");
    param_names__.emplace_back(std::string() + "slope");
    param_names__.emplace_back(std::string() + "Alpha");
    param_names__.emplace_back(std::string() + "Beta");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "intercept");
    param_names__.emplace_back(std::string() + "slope");
    param_names__.emplace_back(std::string() + "Alpha");
    param_names__.emplace_back(std::string() + "Beta");
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {}
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"intercept\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"slope\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"Alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"Beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"intercept\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"slope\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"Alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"Beta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (((1 + 1) + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (((1 + 1) + 1) + 1);
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model_bdpreg_linhet_namespace::model_bdpreg_linhet;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_bdpreg_linhet_namespace::profiles__;
}
#endif
#endif
