load(
    "//bazel:pagespeed_test.bzl",
    "pagespeed_cc_benchmark",
)

licenses(["notice"])  # Apache 2

pagespeed_cc_benchmark(
    name = "cache",
    srcs = glob(["*.cc"]),
    deps = [
        "//benchmark",
        "//pagespeed/kernel/cache",
    ],
)
