/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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
 * OAIPassportElementErrorDataField.h
 *
 * Represents an issue in one of the data fields that was provided by the user. The error is considered resolved when the field&#39;s value changes.
 */

#ifndef OAIPassportElementErrorDataField_H
#define OAIPassportElementErrorDataField_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIPassportElementErrorDataField : public OAIObject {
public:
    OAIPassportElementErrorDataField();
    OAIPassportElementErrorDataField(QString json);
    ~OAIPassportElementErrorDataField() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSource() const;
    void setSource(const QString &source);
    bool is_source_Set() const;
    bool is_source_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getFieldName() const;
    void setFieldName(const QString &field_name);
    bool is_field_name_Set() const;
    bool is_field_name_Valid() const;

    QString getDataHash() const;
    void setDataHash(const QString &data_hash);
    bool is_data_hash_Set() const;
    bool is_data_hash_Valid() const;

    QString getMessage() const;
    void setMessage(const QString &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_source;
    bool m_source_isSet;
    bool m_source_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_field_name;
    bool m_field_name_isSet;
    bool m_field_name_isValid;

    QString m_data_hash;
    bool m_data_hash_isSet;
    bool m_data_hash_isValid;

    QString m_message;
    bool m_message_isSet;
    bool m_message_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIPassportElementErrorDataField)

#endif // OAIPassportElementErrorDataField_H
