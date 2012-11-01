//
//  RACStreamExamples.h
//  ReactiveCocoa
//
//  Created by Justin Spahr-Summers on 2012-11-01.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

// The name of the shared examples for a <RACStream> class.
extern NSString * const RACStreamExamples;

// The <RACStream>-conforming class to test.
extern NSString * const RACStreamExamplesClass;

// A block with the signature:
//
// void (^)(id<RACStream> stream, NSArray *expectedValues)
//
// … used to verify that a stream contains the expected values.
extern NSString * const RACStreamExamplesVerifyValuesBlock;
