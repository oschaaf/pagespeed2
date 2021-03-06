/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef NET_INSTAWEB_REWRITER_PUBLIC_INLINE_OUTPUT_RESOURCE_H_
#define NET_INSTAWEB_REWRITER_PUBLIC_INLINE_OUTPUT_RESOURCE_H_

#include "net/instaweb/rewriter/public/output_resource.h"
#include "net/instaweb/rewriter/public/resource_namer.h"
#include "net/instaweb/rewriter/public/server_context.h"
#include "pagespeed/kernel/base/string.h"

namespace net_instaweb {

class RewriteDriver;

class InlineOutputResource : public OutputResource {
 public:
  static OutputResourcePtr MakeInlineOutputResource(
      const RewriteDriver* driver);

  // Inline resources have no URL.
  bool has_url() const override { return false; }
  GoogleString url() const override;
  GoogleString UrlForDebug() const override;
  GoogleString cache_key() const override;

 private:
  InlineOutputResource(const RewriteDriver* driver, const ResourceNamer& namer);
};

}  // namespace net_instaweb

#endif  // NET_INSTAWEB_REWRITER_PUBLIC_INLINE_OUTPUT_RESOURCE_H_
