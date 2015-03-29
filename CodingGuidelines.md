# Introduction #

So you've decided to become a contributor to our project. Excellent! But before we can start accepting your code, there are a couple of things you should know about how we work. These are mostly guidelines and rules as to how your code should be structured and how it can be committed without upsetting any fellow contributors.

# Code repository #

## Structure ##
Our code repository (SVN) is structured into number of different directories, which serve different purposes:
  * **trunk**: the current development trunk (latest but experimental)
  * **branches**: branches with groundbreaking research, radical ideas and other work-in-progress that is meant to be merged into the trunk at a later point, but also contains project milestones (which are kept away from the trunk for stability reasons)
  * **vendor**: unmodified third-party code and libraries (optionally linked to the appropriate third-party SVN repository through svn:externals)

## Committing code ##
Keep in mind that your commits should initially be fixing or implementing existing issues on our [Bug tracker](http://bugs.mtasa.com). The [Roadmap](http://bugs.mtasa.com/roadmap_page.php) is especially important since it allows contributors to track down priority issues.

Please follow these guidelines for all your contributions:
  * always include a log message (so other contributors can see what's going on)
  * include the issue number in your log message and keep your log messages consistent, e.g. _Fixed #1234: description and notes here_
  * check your own revisions on this project's [Changes](http://code.google.com/p/multitheftauto/source/list) page from time to time: other contributors will likely review and comment on your code, and you're expected to do so in return (_please do not review any commits that are outside your area of expertise_)
  * please do not rate your own commits

## High priority: issues for version 1.0 ##

You are encouraged to fix any issues that are open on our roadmap and targetted for 1.0. All commits should be done to the trunk only. The actual version 1.0 repository is located at _branches/1.0_ and is protected from any unplanned commits through a reviewing process. This is done to ensure the stability of the release version. Nightly builds are also based on the 1.0 branch.

In order to have your commits accepted into the 1.0 version (and nightly builds), the process is as follows:
  1. commit your changes to the trunk and prepend your log message with the _(1.0)_ tag, e.g. _(1.0) Fixed #1234: description and notes here_
  1. mark the issue on the bug tracker as _assigned_ (and not as _fixed_)
  1. get at least 4 contributors to review and comment positively on your code through the [Changes](http://code.google.com/p/multitheftauto/source/list) page
  1. if any contributor has a problem with your commit, resolve by committing more changes and repeat until there are no problems left: all subsequent commits shall be prepended as follows: _(1.0) (rXXXX version N)_ with rXXXX being the first commit revision and N being the n'th change you're making on behalf of that commit revision
  1. contributors are given the opportunity to express any concerns by submitting negative reviews within 30 hours after your latest revision
  1. your commit is approved by at least 4 positive and 0 negative reviews (do _not_ review and rate your own code)
  1. a contributor (you or someone else) merges _all_ of your changes with a single commit into the 1.0 branch with a log message containing a line for each of the affected revisions, formatted as follows:
> > _merged rXXXX: (original commit message for rXXXX_)<br />
> > _merged rYYYY: (original commit message for rYYYY_)<br />
> > etc.
  1. you leave a message behind in the final revision on the [Changes](http://code.google.com/p/multitheftauto/source/list) page noting the revision rYYYY in which the contributions were merged into the 1.0 branch
  1. mark the issue as _fixed_

Commits can be veto'ed by any contributors within the aforementioned review period of 48 hours. If no negative reviews have been submitted, the commit(s) is/are ready to be merged.

## Low priority: issues for later versions ##

If you believe that you are able to fix existing issues that are planned for releases after 1.0, you should commit these to the trunk. Remember that these are lower priority, less important and thus do not contribute to getting the initial 1.0 release done.

## Experimental commits, rewrites and others ##

If your contributions are rather large, experimental, untested, radical, or otherwise different, do not commit your changes to the trunk. Since we need to maintain a certain stability within our trunk and a certain structure within our repository, it is best to commit your proposed changes into separate branch that can later be merged back into the trunk when it has been proven to work by thorough testing.

Contributions that fall under this category are rewrites of one or more parts of our project, newly researched ideas and other things that will likely need an ongoing stream of commits to be completed (even if you think otherwise). Purposely committing these in the trunk will likely upset some people.