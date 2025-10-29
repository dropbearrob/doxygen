/******************************************************************************
 *
 *
 *
 * Copyright (C) 1997-2015 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby
 * granted. No representations are made about the suitability of this software
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

/*
 * translator_jp.h
 *
 * 1.2.5)
 * First Translation
 *      by Kenji Nagamatsu
 * 1.2.12)
 * Update and Shift-Jis(_WIN32)
 *      by Ryunosuke Sato (30-Dec-2001)
 */

#ifndef TRANSLATOR_JE_H
#define TRANSLATOR_JE_H

class TranslatorJapaneseEn : public TranslatorEnglish
{
  public:
    QCString idLanguage() override
    { return "japanese-en"; }
    QCString latexLanguageSupportCommand() override
    {
      return "\\usepackage{CJKutf8}\n";
    }
    QCString latexFontenc() override
    {
      return "";
    }
    QCString latexDocumentPre() override
    {
      return "\\begin{CJK}{UTF8}{min}\n";
    }
    QCString latexDocumentPost() override
    {
      return "\\end{CJK}\n";
    }
    QCString trRTFansicp() override
    {
      return "932";
    }

    /*! Used as ansicpg for RTF fcharset
     *  \see trRTFansicp() for a table of possible values.
     */
    QCString trRTFCharSet() override
    {
      return "128";
    }

    QCString trISOLang() override
    {
      return "ja";
    }
    QCString getLanguageString() override
    {
      return "0x411 Japanese";
    }
//////////////////////////////////////////////////////////////////////////
// new since 1.16.0
//////////////////////////////////////////////////////////////////////////
    /*! Used for the requirements traceability feature */
    QCString trRequirements() override
    {
      return "Requirements";
    }

    /*! Used for the traceability index page title */
    QCString trTraceability() override
    {
      return "Traceability";
    }

    /*! Used for traceability page title prefix */
    QCString trTraceabilityFor(const QCString &name) override
    {
      return "Traceability: " + name;
    }

    /*! Used in traceability table header */
    QCString trRequirementID() override
    {
      return "Requirement ID";
    }

    /*! Used in traceability table header */
    QCString trSatisfiedBy() override
    {
      return "Satisfied By";
    }

    /*! Used in traceability table header */
    QCString trVerifiedBy() override
    {
      return "Verified By";
    }

    /*! Used in @satisfies/@verifies documentation */
    QCString trSatisfies() override
    {
      return "Satisfies";
    }

    /*! Used in @satisfies/@verifies documentation */
    QCString trVerifies() override
    {
      return "Verifies";
    }

    /*! Used in requirements index */
    QCString trRequirementsDescription() override
    {
      return "Here is a list of all requirements with brief descriptions:";
    }

    /*! Used in traceability index */
    QCString trTraceabilityDescription() override
    {
      return "Here is traceability information for all requirements:";
    }

    /*! Used in traceability statistics */
    QCString trSatisfied() override
    {
      return "Satisfied";
    }

    /*! Used in traceability statistics */
    QCString trVerified() override
    {
      return "Verified";
    }
};

#endif
