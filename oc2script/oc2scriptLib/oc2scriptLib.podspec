#
# Be sure to run `pod lib lint oc2scriptLib.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'oc2scriptLib'
  s.version          = '0.1.0'
  s.summary          = 'A short description of oc2scriptLib.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/gaoyu/oc2scriptLib'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'gaoyu' => 'gaoyuhang@kanzhun.com' }
  s.source           = { :git => 'https://github.com/gaoyu/oc2scriptLib.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform = :osx
  s.osx.deployment_target = "13.0"

  s.pod_target_xcconfig = { 'GCC_INPUT_FILETYPE' => 'sourcecode.c.objc' }
  s.source_files = 'oc2scriptLib/Classes/**/*.{h,m,c,y,l}'

  # s.resource_bundles = {
  #   'oc2scriptLib' => ['oc2scriptLib/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'Cocoa'
  # s.dependency 'AFNetworking', '~> 2.3'
end
