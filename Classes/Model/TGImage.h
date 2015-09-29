//
//  TGImage.h
//  Tapglue iOS SDK
//
//  Created by Martin Stemmle on 29/09/15.
//  Copyright (c) 2015 Tapglue (https://www.tapglue.com/). All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "TGModelObject.h"

@interface TGImage : TGModelObject

// TODO: docs
@property (nonatomic, strong) NSURL *url;

// TODO: docs
@property (nonatomic, strong) NSString *type;

// TODO: docs
@property (nonatomic, assign) CGSize size;

@end