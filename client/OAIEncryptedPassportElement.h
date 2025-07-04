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
 * OAIEncryptedPassportElement.h
 *
 * Describes documents or other Telegram Passport elements shared with the bot by the user.
 */

#ifndef OAIEncryptedPassportElement_H
#define OAIEncryptedPassportElement_H

#include <QJsonObject>

#include "OAIPassportFile.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIPassportFile;

class OAIEncryptedPassportElement : public OAIObject {
public:
    OAIEncryptedPassportElement();
    OAIEncryptedPassportElement(QString json);
    ~OAIEncryptedPassportElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getHash() const;
    void setHash(const QString &hash);
    bool is_hash_Set() const;
    bool is_hash_Valid() const;

    QString getData() const;
    void setData(const QString &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    QString getPhoneNumber() const;
    void setPhoneNumber(const QString &phone_number);
    bool is_phone_number_Set() const;
    bool is_phone_number_Valid() const;

    QString getEmail() const;
    void setEmail(const QString &email);
    bool is_email_Set() const;
    bool is_email_Valid() const;

    QList<OAIPassportFile> getFiles() const;
    void setFiles(const QList<OAIPassportFile> &files);
    bool is_files_Set() const;
    bool is_files_Valid() const;

    OAIPassportFile getFrontSide() const;
    void setFrontSide(const OAIPassportFile &front_side);
    bool is_front_side_Set() const;
    bool is_front_side_Valid() const;

    OAIPassportFile getReverseSide() const;
    void setReverseSide(const OAIPassportFile &reverse_side);
    bool is_reverse_side_Set() const;
    bool is_reverse_side_Valid() const;

    OAIPassportFile getSelfie() const;
    void setSelfie(const OAIPassportFile &selfie);
    bool is_selfie_Set() const;
    bool is_selfie_Valid() const;

    QList<OAIPassportFile> getTranslation() const;
    void setTranslation(const QList<OAIPassportFile> &translation);
    bool is_translation_Set() const;
    bool is_translation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_hash;
    bool m_hash_isSet;
    bool m_hash_isValid;

    QString m_data;
    bool m_data_isSet;
    bool m_data_isValid;

    QString m_phone_number;
    bool m_phone_number_isSet;
    bool m_phone_number_isValid;

    QString m_email;
    bool m_email_isSet;
    bool m_email_isValid;

    QList<OAIPassportFile> m_files;
    bool m_files_isSet;
    bool m_files_isValid;

    OAIPassportFile m_front_side;
    bool m_front_side_isSet;
    bool m_front_side_isValid;

    OAIPassportFile m_reverse_side;
    bool m_reverse_side_isSet;
    bool m_reverse_side_isValid;

    OAIPassportFile m_selfie;
    bool m_selfie_isSet;
    bool m_selfie_isValid;

    QList<OAIPassportFile> m_translation;
    bool m_translation_isSet;
    bool m_translation_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIEncryptedPassportElement)

#endif // OAIEncryptedPassportElement_H
