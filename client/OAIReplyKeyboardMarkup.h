/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIReplyKeyboardMarkup.h
 *
 * This object represents a [custom keyboard](https://core.telegram.org/bots/features#keyboards) with reply options (see [Introduction to bots](https://core.telegram.org/bots/features#keyboards) for details and examples). Not supported in channels and for messages sent on behalf of a Telegram Business account.
 */

#ifndef OAIReplyKeyboardMarkup_H
#define OAIReplyKeyboardMarkup_H

#include <QJsonObject>

#include "OAIKeyboardButton.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIKeyboardButton;

class OAIReplyKeyboardMarkup : public OAIObject {
public:
    OAIReplyKeyboardMarkup();
    OAIReplyKeyboardMarkup(QString json);
    ~OAIReplyKeyboardMarkup() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QList<OAIKeyboardButton>> getKeyboard() const;
    void setKeyboard(const QList<QList<OAIKeyboardButton>> &keyboard);
    bool is_keyboard_Set() const;
    bool is_keyboard_Valid() const;

    bool isIsPersistent() const;
    void setIsPersistent(const bool &is_persistent);
    bool is_is_persistent_Set() const;
    bool is_is_persistent_Valid() const;

    bool isResizeKeyboard() const;
    void setResizeKeyboard(const bool &resize_keyboard);
    bool is_resize_keyboard_Set() const;
    bool is_resize_keyboard_Valid() const;

    bool isOneTimeKeyboard() const;
    void setOneTimeKeyboard(const bool &one_time_keyboard);
    bool is_one_time_keyboard_Set() const;
    bool is_one_time_keyboard_Valid() const;

    QString getInputFieldPlaceholder() const;
    void setInputFieldPlaceholder(const QString &input_field_placeholder);
    bool is_input_field_placeholder_Set() const;
    bool is_input_field_placeholder_Valid() const;

    bool isSelective() const;
    void setSelective(const bool &selective);
    bool is_selective_Set() const;
    bool is_selective_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QList<OAIKeyboardButton>> m_keyboard;
    bool m_keyboard_isSet;
    bool m_keyboard_isValid;

    bool m_is_persistent;
    bool m_is_persistent_isSet;
    bool m_is_persistent_isValid;

    bool m_resize_keyboard;
    bool m_resize_keyboard_isSet;
    bool m_resize_keyboard_isValid;

    bool m_one_time_keyboard;
    bool m_one_time_keyboard_isSet;
    bool m_one_time_keyboard_isValid;

    QString m_input_field_placeholder;
    bool m_input_field_placeholder_isSet;
    bool m_input_field_placeholder_isValid;

    bool m_selective;
    bool m_selective_isSet;
    bool m_selective_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIReplyKeyboardMarkup)

#endif // OAIReplyKeyboardMarkup_H
