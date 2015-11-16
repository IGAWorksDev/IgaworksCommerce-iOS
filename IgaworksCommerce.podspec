Pod::Spec.new do |s|
s.name         = "IgaworksCommerce"
<<<<<<< HEAD
s.version      = "2.0.3"
=======
s.version      = "2.0.4"
>>>>>>> release/2.0.4
s.summary      = "IgaworksCommerce.framework"
s.homepage     = "https://github.com/IGAWorksDev/IgaworksCommerce-iOS"

s.license      = {
:type => 'Commercial',
:text => <<-LICENSE
All text and design is copyright 2006-2015 igaworks, Inc.

All rights reserved.

https://github.com/IGAWorksDev/IgaworksCommerce-iOS
LICENSE
}

s.platform = :ios, '6.0'
s.author       = { "wonje,song" => "ricky@igaworks.com" }
s.source       = { :git => "https://github.com/IGAWorksDev/IgaworksCommerce-iOS.git", :tag => "#{s.version}" }
s.ios.vendored_frameworks = 'IgaworksCommerce.framework'
s.libraries = 'xml2'
s.xcconfig     = { 'HEADER_SEARCH_PATHS' => '"$(SDKROOT)/usr/include/libxml2"' }
end
