# C-homework

## Purpose

This repository is used to store and manage source code for C programming coursework. It serves as a remote storage location for accessing source files across different locations.

Git and GitHub provide a convenient way to synchronize files between computers without relying on physical storage devices such as USB drives.

If the repository is public, its files can be browsed and downloaded without signing in to GitHub.

## Basic Operations

### Push Local Changes

After completing or modifying an assignment, run the following commands inside the local repository directory:

```bash
git add .
git commit -m "Add assignment X"
git push
```

Replace `X` with the appropriate assignment name or number.

### Synchronize Remote Changes

If the remote repository has been updated, pull the latest changes before pushing local changes:

```bash
git pull
git push
```

It is recommended to run `git pull` before starting new modifications to reduce the possibility of merge conflicts.

## Git Merge and Vim

When running `git pull`, Git may open Vim to request a merge commit message if the local and remote commit histories need to be merged.

To save the default message and exit Vim:

1. Press `Esc`.
2. Type `:wq`.
3. Press `Enter`.

`:wq` means Write and Quit.

To discard the editing session and exit, use `:q!`.

## Merge Conflict Resolution

A merge conflict may occur when Git cannot automatically combine overlapping changes made to the same file.

Conflicting sections are marked as follows:

```text
<<<<<<< HEAD
Local version
=======
Remote version
>>>>>>> origin/main
```

Manually review and edit the conflicting sections, keep the intended content, and remove all conflict markers.

After resolving the conflict, run:

```bash
git add .
git commit -m "Resolve merge conflict"
git push
```

**Note:** Conflicts are not limited to changes made at exactly the same location. Overlapping modifications to the same file are a common cause, but other structural changes may also prevent automatic merging.

## Notes

- Make sure all assignment files are saved before pushing.
- Synchronize with the remote repository before starting new modifications.
- Do not commit passwords, private information, or other sensitive data.
- Use clear commit messages to maintain an understandable revision history.