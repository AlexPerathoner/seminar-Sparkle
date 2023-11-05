//
//  SUTestApplicationTest.swift
//  Sparkle
//
//  Created by Mayur Pawashe on 8/27/15.
//  Copyright © 2015 Sparkle Project. All rights reserved.
//

import XCTest

// The debugger may catch the Test app receiving a SIGTERM signal when Sparkle quits the app before installing the new one
// So you may have better luck running these tests from the command line without the debugger attached:
// xcodebuild -scheme UITests -configuration Debug test
class SUTestApplicationTest: XCTestCase
{
    
    func testOverhead() {
        sleep(60) // 5 minutes
    }
}
